//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGCoreGraphicsNode.h>

@class NSAttributedString, NSLayoutManager, NSNumber, NSShadow;

@interface IGCoreGraphicsTextViewNode : IGCoreGraphicsNode
{
    long long _alignmentMode;
    NSShadow *_shadow;
    NSAttributedString *_attributedString;
    NSLayoutManager *_layoutManager;
    NSNumber *_lineFragmentPadding;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *lineFragmentPadding; // @synthesize lineFragmentPadding=_lineFragmentPadding;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(copy, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) long long alignmentMode; // @synthesize alignmentMode=_alignmentMode;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
