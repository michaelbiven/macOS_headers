//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>

@class HMAccessory, HMSoftwareUpdate, NSString, NSUUID, _HMContext;
@protocol HMSoftwareUpdateControllerDelegate, OS_dispatch_queue;

@interface HMSoftwareUpdateController : NSObject <HMFMessageReceiver, HMObjectMerge>
{
    HMSoftwareUpdate *_availableUpdate;
    HMAccessory *_accessory;
    id <HMSoftwareUpdateControllerDelegate> _delegate;
    NSUUID *_uniqueIdentifier;
    _HMContext *_context;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (id)logCategory;
+ (id)namespace;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property __weak id <HMSoftwareUpdateControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)startUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAvailableUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain) HMSoftwareUpdate *availableUpdate; // @synthesize availableUpdate=_availableUpdate;
@property(readonly, getter=isControllable) BOOL controllable;
@property __weak HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void)configureWithContext:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithAccessory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

