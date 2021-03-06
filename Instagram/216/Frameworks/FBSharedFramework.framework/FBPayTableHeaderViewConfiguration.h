//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPayTableHeaderViewConfiguration : FBValueObject <NSCopying, NSCoding>
{
    NSString *_text;
    NSString *_ctaText;
    NSString *_ctaAccessibilityHint;
    long long _tag;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSString *ctaAccessibilityHint; // @synthesize ctaAccessibilityHint=_ctaAccessibilityHint;
@property(readonly, copy, nonatomic) NSString *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithText:(id)arg1 ctaText:(id)arg2 ctaAccessibilityHint:(id)arg3 tag:(long long)arg4;

@end

