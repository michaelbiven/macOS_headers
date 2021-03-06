//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/CBPeripheralManagerDelegate-Protocol.h>

@class CBPeripheralManager, NSDictionary, NSMutableDictionary, NSString, NSUUID;

@interface BTLEServer : NSObject <CBPeripheralManagerDelegate>
{
    struct LogCategory *_ucat;
    struct dispatch_queue_s *_queue;
    NSUUID *_advertiseUUID;
    NSDictionary *_configuration;
    NSMutableDictionary *_characteristics;
    CDUnknownBlockType _readHandler;
    CDUnknownBlockType _writeHandler;
    CBPeripheralManager *_peripheralManager;
    BOOL _started;
    NSMutableDictionary *_pendingReplies;
}

@property(copy) CDUnknownBlockType writeHandler; // @synthesize writeHandler=_writeHandler;
@property(copy) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
@property(copy) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property struct LogCategory *logCategory; // @synthesize logCategory=_ucat;
@property struct dispatch_queue_s *dispatchQueue; // @synthesize dispatchQueue=_queue;
@property(copy) NSUUID *advertiseUUID; // @synthesize advertiseUUID=_advertiseUUID;
- (void)completeWriteRequests:(id)arg1 status:(int)arg2;
- (void)completeReadRequest:(id)arg1 status:(int)arg2;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)_stop:(int)arg1;
- (void)stop;
- (int)_start2;
- (void)_start;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

