//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemModule.h>

@class HFItem, HMHome;

@interface HUServiceDetailsItemModule : HFItemModule
{
    HMHome *_home;
    HFItem *_sourceItem;
}

+ (CDUnknownBlockType)serviceDetailsItemSectionComparatorForSortStrategy:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) HFItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;

@end

