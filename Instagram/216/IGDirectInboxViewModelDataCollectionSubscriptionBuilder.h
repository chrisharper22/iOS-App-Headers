//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGDirectInboxViewModelDataCollectionSubscriptionBuilder : NSObject
{
}

- (id)buildInboxViewModelGeneratorInputSubscriptionFromInboxPipe:(id)arg1 accessoriesPipe:(id)arg2 tab:(id)arg3 allTabs:(id)arg4 filterType:(long long)arg5 userSession:(id)arg6;
- (id)buildInboxViewModelsSubscriptionPipesForTab:(id)arg1 filterType:(long long)arg2 viewContext:(id)arg3 inboxConfig:(id)arg4 qpCache:(id)arg5 debounceTime:(double)arg6 selectCoordinator:(id)arg7 viewModelGenerator:(id)arg8 roomsViewModelGenerator:(id)arg9 userSession:(id)arg10 analyticsModule:(id)arg11 viewModelGenerationPerformanceComponent:(id)arg12 currentPreloadContextIdentifier:(id)arg13 buildInboxViewModelsPipeFromRoomsTab:(CDUnknownBlockType)arg14;

@end
