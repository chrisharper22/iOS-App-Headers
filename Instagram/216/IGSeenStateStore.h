//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGUserSessionEndingObject-Protocol.h"

@class IGSeenStateLogger, IGSeenStore, NSString;
@protocol IGUserLauncherSet;

@interface IGSeenStateStore : NSObject <IGUserSessionEndingObject>
{
    id <IGUserLauncherSet> _launcherSet;
    _Bool _mediaRenderedTimerEnabled;
    _Bool _sendShortFormatViewInfo;
    _Bool _sendAdIds;
    NSString *_userSessionPK;
    IGSeenStateLogger *_logger;
    IGSeenStore *_seenStore;
}

+ (id)_carouselFormattedId:(id)arg1 carouselIndex:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IGSeenStore *seenStore; // @synthesize seenStore=_seenStore;
@property(nonatomic) _Bool sendAdIds; // @synthesize sendAdIds=_sendAdIds;
@property(nonatomic) _Bool sendShortFormatViewInfo; // @synthesize sendShortFormatViewInfo=_sendShortFormatViewInfo;
@property(nonatomic) _Bool mediaRenderedTimerEnabled; // @synthesize mediaRenderedTimerEnabled=_mediaRenderedTimerEnabled;
@property(retain, nonatomic) IGSeenStateLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *userSessionPK; // @synthesize userSessionPK=_userSessionPK;
- (void)userSessionWillEnd;
- (void)saveToDiskWithShouldSaveAsynchronously:(_Bool)arg1;
- (_Bool)isCarouselItemSeen:(id)arg1 carouselIndex:(long long)arg2;
- (_Bool)isItemSeenUsingVPVD:(id)arg1;
- (_Bool)isItemSeen:(id)arg1;
- (void)itemNoLongerVisible:(id)arg1;
- (id)_getViewInfoFromViewInfoKey:(id)arg1 analyticsLogger:(id)arg2;
- (void)markMediaAsRendered:(id)arg1 sponsoredInfoProvider:(id)arg2 analyticsLogger:(id)arg3;
- (void)updateSeenPercentageForItem:(id)arg1 percentage:(double)arg2 userSession:(id)arg3;
- (void)_markSeen:(id)arg1;
- (void)markSeenForMedia:(id)arg1;
- (void)markSeenForCarouselItem:(id)arg1 carouselIndex:(long long)arg2;
- (void)updateSeenStateOnRequestSuccessWithFeedItems:(id)arg1 sentSeenIDsParam:(id)arg2 sentViewInfosParam:(id)arg3 isFirstPage:(_Bool)arg4;
- (_Bool)hasSeenItem:(id)arg1;
- (id)getViewInfosAndMarkViewInfoAsClean;
- (_Bool)supportCarouselViewInfo;
- (id)seenIDs;
- (id)initWithDependencies:(id)arg1 isEmployee:(_Bool)arg2;

@end

