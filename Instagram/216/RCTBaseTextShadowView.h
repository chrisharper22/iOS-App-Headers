//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RCTShadowView.h"

@class NSAttributedString, RCTTextAttributes;

@interface RCTBaseTextShadowView : RCTShadowView
{
    NSAttributedString *cachedAttributedText;
    RCTTextAttributes *cachedTextAttributes;
    RCTTextAttributes *_textAttributes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RCTTextAttributes *textAttributes; // @synthesize textAttributes=_textAttributes;
- (void)didSetProps:(id)arg1;
- (void)didUpdateReactSubviews;
- (void)dirtyLayout;
- (id)attributedTextWithBaseTextAttributes:(id)arg1;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (void)setReactTag:(id)arg1;
- (id)init;

@end

