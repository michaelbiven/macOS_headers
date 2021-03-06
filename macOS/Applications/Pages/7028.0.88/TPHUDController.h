//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKChangeSourceObserver-Protocol.h"

@class NSString, TPDocumentRoot, TPInteractiveCanvasController, TPMacPageNumberPopoverViewController, TSDRep;

@interface TPHUDController : NSObject <TSKChangeSourceObserver>
{
    long long _action;
    BOOL _currentlyObservingChangesAndNotifications;
    TPInteractiveCanvasController *_interactiveCanvasController;
    unsigned int _insertPageNumberPopoverEdge;
    TPMacPageNumberPopoverViewController *_insertPageNumberPopoverController;
    TSDRep *_editingRep;
    struct CGRect _displayRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TSDRep *editingRep; // @synthesize editingRep=_editingRep;
@property(nonatomic) unsigned int insertPageNumberPopoverEdge; // @synthesize insertPageNumberPopoverEdge=_insertPageNumberPopoverEdge;
@property(nonatomic) struct CGRect displayRect; // @synthesize displayRect=_displayRect;
@property(readonly, nonatomic) TPMacPageNumberPopoverViewController *insertPageNumberPopoverController; // @synthesize insertPageNumberPopoverController=_insertPageNumberPopoverController;
- (void)showHUDForWPRep:(id)arg1 pageRep:(id)arg2 withFlags:(unsigned long long)arg3;
- (unsigned long long)flagsFromRep:(id)arg1 pageRep:(id)arg2;
- (void)validateHUDOnRep:(id)arg1 didTap:(BOOL)arg2;
- (void)showHUDForRep:(id)arg1;
- (void)updateHeaderFooterOnTap:(long long)arg1;
- (void)dismissActiveHUD;
- (BOOL)hasActiveHUD;
- (void)showHUDForPageRep:(id)arg1 rep:(id)arg2 withFlags:(unsigned long long)arg3;
- (BOOL)shouldUpdateHUDForRep:(id)arg1;
- (id)p_pageRepFromRep:(id)arg1;
- (void)p_closePageNumberPopover;
- (BOOL)shouldTransitionOnTapHUDForRep:(id)arg1;
- (void)showHUDWithFlags:(unsigned long long)arg1 fragmentRect:(struct CGRect)arg2;
- (void)p_showPageNumberPopover;
- (void)didSetTappedSelectionWithWPEditor:(id)arg1 onWPRep:(id)arg2;
- (void)p_takeActionAfterAllChanges;
- (void)p_commandControllerDidCloseGroup:(id)arg1;
- (void)didProcessAllChanges;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)didSetSelectionPath:(id)arg1 withInteractiveCanvasController:(id)arg2;
@property(readonly, nonatomic) __weak TPDocumentRoot *p_documentRoot;
- (void)teardown;
- (id)initWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

