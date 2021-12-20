//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSMBDiscountDataModel, IGUser, NSNumber, NSString;

@interface IGStorySMBDiscountStickerModelBuilder : NSObject
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

+ (id)storySMBDiscountStickerModelFromExistingStorySMBDiscountStickerModel:(id)arg1;
+ (id)storySMBDiscountStickerModel;
- (void).cxx_destruct;
- (id)withTapStateId:(id)arg1;
- (id)withNumOfDiscountsLeft:(id)arg1;
- (id)withDiscount:(id)arg1;
- (id)withBusinessProfile:(id)arg1;
- (id)withOriginalSubtitleHeight:(id)arg1;
- (id)withButtonTextColor:(id)arg1;
- (id)withButtonText:(id)arg1;
- (id)withEndBackgroundColor:(id)arg1;
- (id)withStartBackgroundColor:(id)arg1;
- (id)withSubtitleColor:(id)arg1;
- (id)withTitleColor:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)withPk:(id)arg1;
- (id)build;

@end

