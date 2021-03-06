//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class BRCAccountSession, BRCClientZone, BRCItemID, BRCServerZone, BRCStatInfo, BRCUserRowID;

@protocol BRCItem <NSCopying, NSSecureCoding>
@property(nonatomic) unsigned long long sharingOptions;
@property(readonly, nonatomic) BRCClientZone *clientZone;
@property(readonly, nonatomic) BRCServerZone *serverZone;
@property(readonly, nonatomic) BRCAccountSession *session;
@property(readonly, nonatomic) BRCUserRowID *ownerKey;
@property(readonly, nonatomic) BRCStatInfo *st;
@property(readonly, nonatomic) BRCItemID *itemID;
@property(readonly, nonatomic) BOOL isFinderBookmark;
@property(readonly, nonatomic) BOOL isSymLink;
@property(readonly, nonatomic) BOOL isZoneRoot;
@property(readonly, nonatomic) BOOL isFSRoot;
@property(readonly, nonatomic) BOOL isDirectoryFault;
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL isDocument;
@property(readonly, nonatomic) BOOL isPackage;
@property(readonly, nonatomic) BOOL isBRAlias;
@property(readonly, nonatomic) BOOL isLive;
@property(readonly, nonatomic) BOOL isDead;
- (BOOL)validateLoggingToFile:(struct __sFILE *)arg1;
@end

