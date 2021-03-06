//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/_GEOFailedTicket.h>

#import <GeoServices/GEOMapServiceCompletionTicket-Protocol.h>

@class GEOMapServiceTraits, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _GEOFailedCompletionTicket : _GEOFailedTicket <GEOMapServiceCompletionTicket>
{
    NSString *searchQuery;
    NSString *_searchQuery;
}

@property(readonly, nonatomic, getter=_searchQuery) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (void).cxx_destruct;
- (void)applyToPlaceInfo:(id)arg1;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (BOOL)showAutocompleteClientSource;
- (BOOL)autocompleteTopSectionIsQuerySuggestions;
- (id)sortPriorityMapping;
- (id)clientRankingModel;
- (BOOL)shouldDisplayNoResults;
- (BOOL)hasShouldDisplayNoResults;
- (double)retainSearchTime;
- (BOOL)isRapEnabled;
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;
- (void)applyToSuggestionList:(id)arg1;
- (BOOL)matchesFragment:(id)arg1;
- (id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3;

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property(readonly, nonatomic) CDStruct_d1a7ebee dataRequestKind;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *responseUserInfo;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

