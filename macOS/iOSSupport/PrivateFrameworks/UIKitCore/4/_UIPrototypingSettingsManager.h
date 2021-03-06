//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIPrototypingSettingsManager : NSObject
{
    NSMutableDictionary *_storedSettings;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *storedSettings; // @synthesize storedSettings=_storedSettings;
- (void)deleteAllStoredSettings;
- (void)synchronizeStoredSettings;
@property(readonly, nonatomic) NSArray *allSettings;
- (id)settingOfType:(long long)arg1 withName:(id)arg2;
- (id)init;

@end

