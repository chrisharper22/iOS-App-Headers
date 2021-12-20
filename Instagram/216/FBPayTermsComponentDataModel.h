//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayTextWithEntities, NSArray, NSString;

@interface FBPayTermsComponentDataModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_bodyText;
    FBPayTextWithEntities *_ctaText;
    NSString *_sheetHeader;
    NSArray *_sheetBodyText;
    FBPayTextWithEntities *_paymentTerms;
    FBPayTextWithEntities *_privacyPolicyTerms;
    NSArray *_termsActionsTerms;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *termsActionsTerms; // @synthesize termsActionsTerms=_termsActionsTerms;
@property(readonly, copy, nonatomic) FBPayTextWithEntities *privacyPolicyTerms; // @synthesize privacyPolicyTerms=_privacyPolicyTerms;
@property(readonly, copy, nonatomic) FBPayTextWithEntities *paymentTerms; // @synthesize paymentTerms=_paymentTerms;
@property(readonly, copy, nonatomic) NSArray *sheetBodyText; // @synthesize sheetBodyText=_sheetBodyText;
@property(readonly, copy, nonatomic) NSString *sheetHeader; // @synthesize sheetHeader=_sheetHeader;
@property(readonly, copy, nonatomic) FBPayTextWithEntities *ctaText; // @synthesize ctaText=_ctaText;
@property(readonly, copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
- (id)initWithBodyText:(id)arg1 ctaText:(id)arg2 sheetHeader:(id)arg3 sheetBodyText:(id)arg4 paymentTerms:(id)arg5 privacyPolicyTerms:(id)arg6 termsActionsTerms:(id)arg7;

@end
