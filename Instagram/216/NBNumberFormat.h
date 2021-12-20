//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface NBNumberFormat : NSObject
{
    _Bool nationalPrefixOptionalWhenFormatting;
    NSString *pattern;
    NSString *format;
    NSMutableArray *leadingDigitsPatterns;
    NSString *nationalPrefixFormattingRule;
    NSString *domesticCarrierCodeFormattingRule;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *domesticCarrierCodeFormattingRule; // @synthesize domesticCarrierCodeFormattingRule;
@property(nonatomic) _Bool nationalPrefixOptionalWhenFormatting; // @synthesize nationalPrefixOptionalWhenFormatting;
@property(retain, nonatomic) NSString *nationalPrefixFormattingRule; // @synthesize nationalPrefixFormattingRule;
@property(retain, nonatomic) NSMutableArray *leadingDigitsPatterns; // @synthesize leadingDigitsPatterns;
@property(retain, nonatomic) NSString *format; // @synthesize format;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern;
- (void)setData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)stringArrayFromData:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1;

@end

