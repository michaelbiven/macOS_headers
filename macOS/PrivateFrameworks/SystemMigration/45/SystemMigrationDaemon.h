//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "SMSystemScannerDaemonClient.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSXPCListener;

@interface SystemMigrationDaemon : NSObject <NSXPCListenerDelegate, SMSystemScannerDaemonClient>
{
    unsigned long long _requestedDaemonScannerState;
    NSXPCListener *_migrateFromListener;
    NSXPCListener *_selectSourceListener;
    NSXPCListener *_customizeListener;
    NSXPCListener *_progressListener;
    NSXPCListener *_debugListener;
    NSXPCListener *_odUtilsListener;
    NSMutableArray *_clientConnections;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSObject<OS_dispatch_source> *_shutdownTimer;
}

+ (id)sharedDaemon;
+ (void)initialize;
@property(retain) NSObject<OS_dispatch_source> *shutdownTimer; // @synthesize shutdownTimer=_shutdownTimer;
@property(retain) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property(retain) NSMutableArray *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(retain) NSXPCListener *odUtilsListener; // @synthesize odUtilsListener=_odUtilsListener;
@property(retain) NSXPCListener *debugListener; // @synthesize debugListener=_debugListener;
@property(retain) NSXPCListener *progressListener; // @synthesize progressListener=_progressListener;
@property(retain) NSXPCListener *customizeListener; // @synthesize customizeListener=_customizeListener;
@property(retain) NSXPCListener *selectSourceListener; // @synthesize selectSourceListener=_selectSourceListener;
@property(retain) NSXPCListener *migrateFromListener; // @synthesize migrateFromListener=_migrateFromListener;
@property unsigned long long requestedDaemonScannerState; // @synthesize requestedDaemonScannerState=_requestedDaemonScannerState;
- (void).cxx_destruct;
- (void)doIdleCheck;
- (void)attemptIdleExit;
- (BOOL)daemonIsIdle;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)updateServicesStateAfterRemoval:(id)arg1;
- (void)removeConnectionObservers:(id)arg1;
- (void)addConnectionObservers:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateRequestedScannerState;
- (void)performOnServiceQueue:(CDUnknownBlockType)arg1 blocking:(BOOL)arg2;
- (void)performOnServiceQueue:(CDUnknownBlockType)arg1;
- (void)startListeningForConnections;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

