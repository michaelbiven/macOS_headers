//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXCollectionsLayoutSection.h"

@class HoneycombPattern, NSMutableDictionary;

@interface IPXHoneycombPatternLayoutSection : IPXCollectionsLayoutSection
{
    HoneycombPattern *_pattern;
    double _itemSize;
    struct CGRect _patternRect;
    unsigned long long _numberOfRows;
    NSMutableDictionary *_patternItemOrigins;
    double _itemToSectionWidthRatio;
    long long _maximumItemsInWideRow;
    long long _minimumItemsInWideRow;
    long long _minimumItemsInLastRow;
}

@property(nonatomic) long long minimumItemsInLastRow; // @synthesize minimumItemsInLastRow=_minimumItemsInLastRow;
@property(nonatomic) long long minimumItemsInWideRow; // @synthesize minimumItemsInWideRow=_minimumItemsInWideRow;
@property(nonatomic) long long maximumItemsInWideRow; // @synthesize maximumItemsInWideRow=_maximumItemsInWideRow;
@property(nonatomic) double itemToSectionWidthRatio; // @synthesize itemToSectionWidthRatio=_itemToSectionWidthRatio;
- (void).cxx_destruct;
- (void)_calculatePatternItemOffsets;
- (id)_layoutIndexPathFromPatternIndexPath:(id)arg1;
- (id)_patternIndexPathFromLayoutIndexPath:(id)arg1;
- (BOOL)_isLastRow:(unsigned long long)arg1;
- (id)createCacheableLayoutAttributesForFooterInBounds:(struct CGRect)arg1 withPlacement:(unsigned long long)arg2;
- (id)createCacheableLayoutAttributesForHeaderInBounds:(struct CGRect)arg1 withPlacement:(unsigned long long)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (void)prepareInBounds:(struct CGRect)arg1 withPlacement:(unsigned long long)arg2;

@end

