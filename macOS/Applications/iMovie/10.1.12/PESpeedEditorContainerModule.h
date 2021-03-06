//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFSpeedEditorDelegate.h"
#import "NSPopoverDelegate.h"
#import "NSWindowDelegate.h"

@class FFSpeedEditorViewModule, NSPopover, NSString;

@interface PESpeedEditorContainerModule : LKViewModule <FFSpeedEditorDelegate, NSWindowDelegate, NSPopoverDelegate>
{
    FFSpeedEditorViewModule *_speedEditorModule;
    NSPopover *_speedEditorPopover;
    BOOL _speedEditorPopoverVisible;
    id _currentEditorModule;
    float _segmentOffset;
    BOOL _closingWindow;
}

- (void)speedEditorShouldClose;
- (id)editorModule;
- (BOOL)canBeginSkimming;
- (BOOL)speedEditorIsShown;
- (void)popoverDidClose:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)hideSpeedEditor;
- (void)showSpeedEditorForObjects:(id)arg1 orObjectsAndRanges:(id)arg2 segmentIndex:(int)arg3 forTransition:(BOOL)arg4 atTime:(CDStruct_1b6d18a9)arg5 forEditorModule:(id)arg6;
- (struct CGRect)_computeTargetRectForObjects:(id)arg1 orObjectsAndRanges:(id)arg2 segmentIndex:(int)arg3 atTime:(CDStruct_1b6d18a9)arg4 forEditorModule:(id)arg5;
- (void)speedHUDDidResignKey:(id)arg1;
- (void)_handlePlayPause:(id)arg1;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)cleanup;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (struct CGSize)viewMinSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

