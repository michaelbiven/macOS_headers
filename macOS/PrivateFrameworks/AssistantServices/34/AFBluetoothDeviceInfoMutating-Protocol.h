//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@protocol AFBluetoothDeviceInfoMutating <NSObject>
- (void)setSupportsListeningModeTransparency:(BOOL)arg1;
- (void)setSupportsListeningModeANC:(BOOL)arg1;
- (void)setSupportsSpokenNotification:(BOOL)arg1;
- (void)setSupportsVoiceTrigger:(BOOL)arg1;
- (void)setSupportsInEarDetection:(BOOL)arg1;
- (void)setIsAdvancedAppleAudioDevice:(BOOL)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setVendorID:(unsigned int)arg1;
- (void)setDeviceUID:(NSUUID *)arg1;
- (void)setAddress:(NSString *)arg1;
@end

