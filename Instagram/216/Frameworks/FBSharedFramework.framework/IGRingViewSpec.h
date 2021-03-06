//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray, NSShadow, NSString;

@interface IGRingViewSpec : NSObject <NSCoding, NSCopying>
{
    _Bool _dynamicLineWidth;
    NSArray *_locations;
    NSArray *_colors;
    NSShadow *_shadow;
    double _shadowOpacity;
    double _animationDuration;
    NSString *_loggingId;
    double _animationStartRadian;
    double _widthMultiplier;
    double _lineWidth;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (id)_getGradientPointFromDictionary:(id)arg1;
+ (id)customSpecFromServerResponse:(id)arg1;
+ (id)feedItemHeaderSpecFromSpec:(id)arg1;
+ (id)errorSpecWithLineWidth:(double)arg1;
+ (id)greySpecWithLineWidth:(double)arg1;
+ (id)colorfulSpecWithLineWidth:(double)arg1;
+ (id)keywordSearchSpec;
+ (id)profilePictureContentSpec;
+ (id)errorSpec;
+ (id)feedItemHeaderPrideSpec;
+ (id)feedItemHeaderFanClubSpec;
+ (id)feedItemHeaderCloseFriendsSpec;
+ (id)fanClubExclusiveSpec;
+ (id)prideSpec;
+ (id)closeFriendsSpec;
+ (id)liveExploreFanClubSpec;
+ (id)liveQAGradientSpecBranding2021;
+ (id)liveExploreGradientSpecBranding2021;
+ (id)liveDefaultGradientSpecBranding2021;
+ (id)_liveDefaultGradientSpecBranding2021WithLineWidth:(double)arg1;
+ (id)liveQAGradientSpec;
+ (id)liveExploreGradientSpec;
+ (id)liveDefaultGradientSpec;
+ (id)_liveDefaultGradientSpecWithLineWidth:(double)arg1;
+ (id)directSentBlackSpec;
+ (id)_directVisualMessageTombstoneLoadingSpecWithColor:(id)arg1;
+ (id)directVisualMessageReplayableTombstoneLoadingSpec;
+ (id)directVisualMessageUnseenTombstoneLoadingSpec;
+ (id)directInboxLoadingAccessorySpec;
+ (id)directThreadHeaderBlueRingSpec;
+ (id)directThreadHeaderRingSpecWithColor:(id)arg1;
+ (id)directThreadHeaderEmptySpec;
+ (id)directGroupsSpec;
+ (id)directBlueSpec;
+ (id)directStoryColorfulSpec;
+ (id)countDownSpec;
+ (id)transparentWhiteSpec;
+ (id)graySpec;
+ (id)activityFeedSpec;
+ (id)hashtagPageSpec;
+ (id)exploreOneByTwoColorfulSpec;
+ (id)exploreColorfulSpec;
+ (id)feedItemHeaderColorfulSpec;
+ (id)searchColorfulSpec;
+ (id)colorfulSpec;
+ (id)noneSpec;
+ (id)defaultShadow;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool dynamicLineWidth; // @synthesize dynamicLineWidth=_dynamicLineWidth;
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) double widthMultiplier; // @synthesize widthMultiplier=_widthMultiplier;
@property(readonly, nonatomic) double animationStartRadian; // @synthesize animationStartRadian=_animationStartRadian;
@property(readonly, nonatomic) NSString *loggingId; // @synthesize loggingId=_loggingId;
@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, copy, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly, copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(readonly, copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
- (_Bool)isEqual:(id)arg1;
- (double)lineWidthForBounds:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocations:(id)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 colors:(id)arg4 dynamicLineWidth:(_Bool)arg5 lineWidth:(double)arg6 widthMultiplier:(double)arg7 shadow:(id)arg8 shadowOpacity:(double)arg9 animationDuration:(double)arg10 animationStartRadian:(double)arg11;
- (id)initWithColors:(id)arg1 dynamicLineWidth:(_Bool)arg2 lineWidth:(double)arg3 widthMultiplier:(double)arg4 shadow:(id)arg5 shadowOpacity:(double)arg6;

@end

