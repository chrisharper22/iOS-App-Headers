//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSAttributedString, NSString;

@interface FBPayComponentTermsCellViewModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_bodyText;
    NSAttributedString *_ctaText;
    NSString *_sheetHeaderText;
    NSArray *_sheetBodyText;
    NSAttributedString *_sheetPaymentsTerms;
    NSAttributedString *_sheetPrivacyTerms;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSAttributedString *sheetPrivacyTerms; // @synthesize sheetPrivacyTerms=_sheetPrivacyTerms;
@property(readonly, copy, nonatomic) NSAttributedString *sheetPaymentsTerms; // @synthesize sheetPaymentsTerms=_sheetPaymentsTerms;
@property(readonly, copy, nonatomic) NSArray *sheetBodyText; // @synthesize sheetBodyText=_sheetBodyText;
@property(readonly, copy, nonatomic) NSString *sheetHeaderText; // @synthesize sheetHeaderText=_sheetHeaderText;
@property(readonly, copy, nonatomic) NSAttributedString *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
- (id)initWithBodyText:(id)arg1 ctaText:(id)arg2 sheetHeaderText:(id)arg3 sheetBodyText:(id)arg4 sheetPaymentsTerms:(id)arg5 sheetPrivacyTerms:(id)arg6;

@end
