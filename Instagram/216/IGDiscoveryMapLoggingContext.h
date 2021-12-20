//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSDate, NSString;

@interface IGDiscoveryMapLoggingContext : NSObject
{
    IGUserSession *_userSession;
    NSString *_entryPoint;
    _Bool _hasLoggedImpression;
    NSDate *_lastMapEnterDate;
    NSString *_queryToken;
    NSString *_mapSessionId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *mapSessionId; // @synthesize mapSessionId=_mapSessionId;
@property(retain, nonatomic) NSString *queryToken; // @synthesize queryToken=_queryToken;
- (struct IgDiscoveryMapEventNoBuilder)_commonFieldsForAction:(id)arg1 containerModule:(id)arg2 query:(id)arg3;
- (void)logExitForLocation:(id)arg1 containerModule:(id)arg2 enteredDate:(id)arg3;
- (void)logContactTapForLocation:(id)arg1 containerModule:(id)arg2;
- (void)logViewInfoTapForLocation:(id)arg1 containerModule:(id)arg2;
- (void)logSendTapForLocation:(id)arg1 containerModule:(id)arg2;
- (void)logSaveTapForLocation:(id)arg1 containerModule:(id)arg2;
- (void)logMediaGridTabSelection:(long long)arg1 fromPageForLocation:(id)arg2 containerModule:(id)arg3;
- (void)logTapGridMediaWithId:(id)arg1 fromPageForLocation:(id)arg2 containerModule:(id)arg3;
- (void)logTapFollowForBusinessUserPk:(id)arg1 fromPageForLocation:(id)arg2 containerModule:(id)arg3;
- (void)logSeeMenuCtaImpressionWithContainerModule:(id)arg1 locationID:(id)arg2;
- (void)logTapGuideWithContainerModule:(id)arg1 query:(id)arg2;
- (void)logMapExitWithContainerModule:(id)arg1 query:(id)arg2;
- (void)logStickerInteractionsForStickerEvent:(long long)arg1 withContainerModule:(id)arg2;
- (void)logEffectForEvent:(long long)arg1 withEffectID:(id)arg2 withOriginType:(long long)arg3 withContainerModule:(id)arg4;
- (void)logExpandBottomSheetWithContainerModule:(id)arg1 query:(id)arg2 pin:(id)arg3 resultPosition:(unsigned long long)arg4;
- (void)logLegacyButtonViewForLocationID:(id)arg1 withContainerModule:(id)arg2;
- (void)logTapLocationStoryForLocationID:(id)arg1 mapPin:(id)arg2 withContainerModule:(id)arg3 query:(id)arg4;
- (void)logTapLocationPageForPin:(id)arg1 resultPosition:(unsigned long long)arg2 withContainerModule:(id)arg3 query:(id)arg4;
- (void)logTapClusterForLocationIds:(id)arg1 withContainerModule:(id)arg2 query:(id)arg3;
- (void)logLoadLocationPins:(id)arg1 hasPreviouslyUpdatedPins:(_Bool)arg2 coordinatesProvider:(id)arg3 withContainerModule:(id)arg4 query:(id)arg5;
- (void)logRequestForQuery:(id)arg1 withContainerModule:(id)arg2 isUserInteraction:(_Bool)arg3;
- (void)logMapEnterWithContainerModule:(id)arg1 query:(id)arg2;
- (void)logImpressionForContainerModule:(id)arg1 searchType:(id)arg2 searchID:(id)arg3;
- (void)logMapImpressionForPin:(id)arg1 isSubImpression:(_Bool)arg2 containerModule:(id)arg3;
- (void)logLocationListImpressionForPin:(id)arg1 resultPosition:(unsigned long long)arg2 isSubImpression:(_Bool)arg3 containerModule:(id)arg4;
- (void)trackImpressionForView:(id)arg1 containerModule:(id)arg2 searchType:(id)arg3 searchID:(id)arg4;
- (id)initWithUserSession:(id)arg1 mapSessionId:(id)arg2 entryPoint:(id)arg3;

@end
