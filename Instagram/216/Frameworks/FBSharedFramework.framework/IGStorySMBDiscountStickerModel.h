//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGSMBDiscountDataModel, IGUser, NSNumber, NSString;

@interface IGStorySMBDiscountStickerModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_pk;
    NSString *_title;
    NSString *_titleColor;
    NSString *_subtitleColor;
    NSString *_startBackgroundColor;
    NSString *_endBackgroundColor;
    NSString *_buttonText;
    NSString *_buttonTextColor;
    NSNumber *_originalSubtitleHeight;
    IGUser *_businessProfile;
    IGSMBDiscountDataModel *_discount;
    NSNumber *_numOfDiscountsLeft;
    NSString *_tapStateId;
}

+ (id)valueWithJSONDictionary:(id)arg1 objectStores:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *tapStateId; // @synthesize tapStateId=_tapStateId;
@property(readonly, copy, nonatomic) NSNumber *numOfDiscountsLeft; // @synthesize numOfDiscountsLeft=_numOfDiscountsLeft;
@property(readonly, copy, nonatomic) IGSMBDiscountDataModel *discount; // @synthesize discount=_discount;
@property(readonly, copy, nonatomic) IGUser *businessProfile; // @synthesize businessProfile=_businessProfile;
@property(readonly, copy, nonatomic) NSNumber *originalSubtitleHeight; // @synthesize originalSubtitleHeight=_originalSubtitleHeight;
@property(readonly, copy, nonatomic) NSString *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(readonly, copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(readonly, copy, nonatomic) NSString *endBackgroundColor; // @synthesize endBackgroundColor=_endBackgroundColor;
@property(readonly, copy, nonatomic) NSString *startBackgroundColor; // @synthesize startBackgroundColor=_startBackgroundColor;
@property(readonly, copy, nonatomic) NSString *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(readonly, copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)diffIdentifier;
- (id)initWithPk:(id)arg1 title:(id)arg2 titleColor:(id)arg3 subtitleColor:(id)arg4 startBackgroundColor:(id)arg5 endBackgroundColor:(id)arg6 buttonText:(id)arg7 buttonTextColor:(id)arg8 originalSubtitleHeight:(id)arg9 businessProfile:(id)arg10 discount:(id)arg11 numOfDiscountsLeft:(id)arg12 tapStateId:(id)arg13;
- (id)initWithCoder:(id)arg1;

@end

