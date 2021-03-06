//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUser, NSString;

@interface IGCountdownStickerConsumptionModelBuilder : NSObject
{
    NSString *_pk;
    NSString *_text;
    NSString *_textColor;
    NSString *_startBackgroundColor;
    NSString *_endBackgroundColor;
    NSString *_digitColor;
    NSString *_digitCardColor;
    double _endUnixTimestamp;
    _Bool _followingEnabled;
    IGUser *_attributionUser;
    _Bool _isViewerCountdownOwner;
    _Bool _isViewerFollowing;
    NSString *_backgroundImageUrl;
    NSString *_suggestionId;
    NSString *_tapStateId;
}

+ (id)countdownStickerConsumptionModelFromExistingCountdownStickerConsumptionModel:(id)arg1;
+ (id)countdownStickerConsumptionModel;
- (void).cxx_destruct;
- (id)withTapStateId:(id)arg1;
- (id)withSuggestionId:(id)arg1;
- (id)withBackgroundImageUrl:(id)arg1;
- (id)withIsViewerFollowing:(_Bool)arg1;
- (id)withIsViewerCountdownOwner:(_Bool)arg1;
- (id)withAttributionUser:(id)arg1;
- (id)withFollowingEnabled:(_Bool)arg1;
- (id)withEndUnixTimestamp:(double)arg1;
- (id)withDigitCardColor:(id)arg1;
- (id)withDigitColor:(id)arg1;
- (id)withEndBackgroundColor:(id)arg1;
- (id)withStartBackgroundColor:(id)arg1;
- (id)withTextColor:(id)arg1;
- (id)withText:(id)arg1;
- (id)withPk:(id)arg1;
- (id)build;

@end

