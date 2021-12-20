//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGInsightsLogger, IGInsightsLoggingData, IGUserSession, NSString;

@interface IGProfileContentInsightsViewModelGenerator : NSObject
{
    IGUserSession *_userSession;
    IGInsightsLogger *_logger;
    IGInsightsLoggingData *_defaultLoggingData;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (id)_promotionsUnitViewModelWithData:(id)arg1;
- (id)_storiesUnitViewModelWithData:(id)arg1;
- (id)_postsUnitViewModelWithData:(id)arg1;
- (id)_contentInfoWithData:(id)arg1;
- (id)_unitsWithData:(id)arg1;
- (id)unitsWithFetchStatus:(id)arg1;
- (id)generateViewModelsWithFetchStatus:(id)arg1;
- (id)infoViewModelsForUnit:(unsigned long long)arg1;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2 defaultLoggingData:(id)arg3 analyticsModule:(id)arg4;

@end
