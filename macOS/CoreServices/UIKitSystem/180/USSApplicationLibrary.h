//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBSApplicationLibrary.h>

#import "FBProcessManagerObserver-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface USSApplicationLibrary : FBSApplicationLibrary <FBProcessManagerObserver>
{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSMutableDictionary *_memberQueue_bundleIDToAppInfo;
}

+ (id)sharedLibrary;
- (void).cxx_destruct;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)applicationsWillUninstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (void)networkUsageChanged:(BOOL)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)_executeOrPendInstallSynchronizationBlock:(CDUnknownBlockType)arg1;
- (void)noteSystemAppDidFinishLaunching;
- (void)_removeApplicationWithBundleID:(id)arg1;
- (void)removeApplicationProxy:(id)arg1;
- (void)addApplicationProxy:(id)arg1 withOverrideURL:(id)arg2;
- (id)observeDidChangeNetworkUsageWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidDemoteApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidRemoveApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidUpdateApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidReplaceApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidAddApplicationsWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidCancelPlaceholdersWithBlock:(CDUnknownBlockType)arg1;
- (id)observeDidAddPlaceholdersWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObserverForToken:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uninstallApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)placeholderWithBundleIdentifier:(id)arg1;
- (id)allPlaceholders;
- (void)installedApplicationWithBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (id)allInstalledApplications;
- (BOOL)isUsingNetwork;
- (void)dealloc;
- (void)_load;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

