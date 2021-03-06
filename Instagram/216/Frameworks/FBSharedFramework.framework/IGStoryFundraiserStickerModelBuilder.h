//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStoryFundraiserStickerConsumptionSheetModel, IGUser, NSNumber, NSString;

@interface IGStoryFundraiserStickerModelBuilder : NSObject
{
    NSString *_pk;
    NSString *_title;
    NSString *_titleColor;
    NSString *_subtitleColor;
    NSString *_startBackgroundColor;
    NSString *_endBackgroundColor;
    NSString *_buttonTextColor;
    IGUser *_user;
    IGStoryFundraiserStickerConsumptionSheetModel *_consumptionSheetModel;
    NSString *_sourceName;
    NSNumber *_originalSubtitleHeight;
    NSString *_auxiliaryMessage;
    NSString *_fundraiserStickerType;
    NSString *_tapStateId;
}

+ (id)storyFundraiserStickerModelFromExistingStoryFundraiserStickerModel:(id)arg1;
+ (id)storyFundraiserStickerModel;
- (void).cxx_destruct;
- (id)withTapStateId:(id)arg1;
- (id)withFundraiserStickerType:(id)arg1;
- (id)withAuxiliaryMessage:(id)arg1;
- (id)withOriginalSubtitleHeight:(id)arg1;
- (id)withSourceName:(id)arg1;
- (id)withConsumptionSheetModel:(id)arg1;
- (id)withUser:(id)arg1;
- (id)withButtonTextColor:(id)arg1;
- (id)withEndBackgroundColor:(id)arg1;
- (id)withStartBackgroundColor:(id)arg1;
- (id)withSubtitleColor:(id)arg1;
- (id)withTitleColor:(id)arg1;
- (id)withTitle:(id)arg1;
- (id)withPk:(id)arg1;
- (id)build;

@end

