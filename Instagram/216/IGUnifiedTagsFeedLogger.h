//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMedia, NSMutableSet, NSString;

@interface IGUnifiedTagsFeedLogger : NSObject
{
    IGMedia *_media;
    NSString *_module;
    _Bool _hasLoggedSummaryForSinglePost;
    NSMutableSet *_loggedPostItemPKs;
}

- (void).cxx_destruct;
- (id)_eventForSummaryWithTagsProvider:(id)arg1;
- (void)logMediaTaggedItemsDisplaySummaryForCarouselWithPostItem:(id)arg1 index:(long long)arg2 analyticsLogger:(id)arg3;
- (void)logMediaTaggedItemsDisplaySummaryForSinglePostWithAnalyticsLogger:(id)arg1;
- (id)initWithMedia:(id)arg1 module:(id)arg2;

@end
