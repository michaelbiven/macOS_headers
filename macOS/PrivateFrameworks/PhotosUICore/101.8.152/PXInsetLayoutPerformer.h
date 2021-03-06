//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXBaseLayoutPerformer.h>

#import <PhotosUICore/PXMutableLayoutPerformer-Protocol.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXInsetLayoutPerformer : PXBaseLayoutPerformer <PXMutableLayoutPerformer>
{
    NSArray *children;
    struct NSEdgeInsets _layoutInsets;
}

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_8c65c4f4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) struct NSEdgeInsets layoutInsets; // @synthesize layoutInsets=_layoutInsets;
- (void)setChildren:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize)performLayout;

// Remaining properties
@property(nonatomic) CDStruct_8c65c4f4 layoutInput;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput;

@end

