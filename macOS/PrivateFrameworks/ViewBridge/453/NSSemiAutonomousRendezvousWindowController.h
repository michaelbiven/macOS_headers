//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViewBridge/NSRendezvousWindowController.h>

__attribute__((visibility("hidden")))
@interface NSSemiAutonomousRendezvousWindowController : NSRendezvousWindowController
{
}

+ (void)addPanelBridgeKeys:(id)arg1;
+ (void)addBridgeKeys:(id)arg1;
+ (unsigned long long)acceptableStyleMask;
- (id)appearance;
- (id)objectToObserveForKey:(id)arg1 withWindow:(id)arg2;
- (void)_viewDidChangeAppearance:(id)arg1;
- (BOOL)_shouldNormalizeAppearance;
- (unsigned long long)awakeFromRemoteView;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transaction:(id)arg2;
- (id)requestFrame:(struct CGRect)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)requestResize:(struct CGSize)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)allowsWindowFrameOriginChanges;
- (struct CGRect)_serviceWindowFrameForRemoteViewFrame:(struct CGRect)arg1;
- (void)windowWillOrder:(long long)arg1 relativeTo:(long long)arg2;

@end

