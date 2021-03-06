//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSDictionary, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, NSTrackingArea, TALink;

@interface TALinkLabel : NSView
{
    BOOL _commited;
    NSString *_markdownString;
    NSTextStorage *_text;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    struct _NSRange _glyphRange;
    struct CGRect _glyphRect;
    NSArray *_links;
    TALink *_hoveredLink;
    NSTrackingArea *_trackingArea;
    id <TALinkLabelDelegate> _delegate;
    NSDictionary *_textAttributes;
    NSDictionary *_linkAttributes;
    NSDictionary *_hoveredLinkAttributes;
}

@property(retain, nonatomic) NSDictionary *hoveredLinkAttributes; // @synthesize hoveredLinkAttributes=_hoveredLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(retain, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(nonatomic) __weak id <TALinkLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)parseMarkdownString:(id)arg1 outLinks:(id *)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (id)updateHoveredLinkAtPoint:(struct CGPoint)arg1;
- (void)updateTrackingAreas;
- (void)resetCursorRects;
- (void)drawRect:(struct CGRect)arg1;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (void)setHoveredLink:(id)arg1;
- (id)bestLinkAttributes:(BOOL)arg1;
- (BOOL)testPoint:(struct CGPoint)arg1 inRects:(id)arg2;
- (id)rectsFromRange:(struct _NSRange)arg1;
- (void)commitCalculatingSize;
- (struct CGSize)sizeByNewLines;
- (struct CGSize)sizeThatFitsWidth:(double)arg1;
- (void)beginCalculatingSizeForMarkdownString:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

