//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PodcastServices/PODContentChangeEntityData.h>

#import "PODSecureCoding.h"

@class NSString, PODShow, PODShowArtworkChangeEntityData;

@interface PODShowChangeEntityData : PODContentChangeEntityData <PODSecureCoding>
{
    PODShow *_show;
    PODShowArtworkChangeEntityData *_showArtworkData;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PODShowArtworkChangeEntityData *showArtworkData; // @synthesize showArtworkData=_showArtworkData;
@property(readonly, nonatomic) PODShow *show; // @synthesize show=_show;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithShow:(id)arg1 showArtworkData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

