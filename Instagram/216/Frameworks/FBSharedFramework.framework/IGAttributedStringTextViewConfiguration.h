//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface IGAttributedStringTextViewConfiguration : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_linkColor;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)initWithBackgroundColor:(id)arg1 linkColor:(id)arg2 textViewInsets:(struct UIEdgeInsets)arg3;

@end
