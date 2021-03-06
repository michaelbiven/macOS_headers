//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TSKDocumentRootDelegate-Protocol.h"

@class NSString, TSACollaborationErrorAction, TSADocumentInfo, TSADocumentRoot, TSKMailboxDocStatusMessage, TSUDocumentSerializationToken;

@protocol TSADocumentRootDelegate <TSKDocumentRootDelegate>
@property(readonly, nonatomic) NSString *name;

@optional
@property(readonly, nonatomic) BOOL isClosedOrClosing;
@property(readonly, nonatomic) BOOL shouldSkipStartRecalculationOnLoad;
@property(readonly) TSACollaborationErrorAction *collaborationDisallowedErrorAction;
@property(readonly, nonatomic) TSADocumentInfo *documentInfo;
@property(readonly, nonatomic) NSString *documentCachePath;
@property(readonly, nonatomic) NSString *defaultDraftName;
- (BOOL)hasPersistenceWarningsOfKind:(long long)arg1;
- (void)didMailboxShutdown;
- (void)handleCollaborationErrorAction:(TSACollaborationErrorAction *)arg1 parentDocumentSerializationToken:(TSUDocumentSerializationToken *)arg2 completion:(void (^)(void))arg3;
- (void)enqueueCollaborationErrorAction:(TSACollaborationErrorAction *)arg1;
- (void)documentRoot:(TSADocumentRoot *)arg1 didReceiveDocumentStatusNotification:(TSKMailboxDocStatusMessage *)arg2;
- (void)willPostUndoManagerNotificationsUsingBlock:(void (^)(void))arg1;
- (void)invalidateRestorableState;
@end

