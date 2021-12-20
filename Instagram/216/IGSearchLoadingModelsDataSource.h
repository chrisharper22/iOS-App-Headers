//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSearchLoadingStateModelsProvider-Protocol.h"

@class NSString;

@interface IGSearchLoadingModelsDataSource : NSObject <IGSearchLoadingStateModelsProvider>
{
    _Bool _shouldUseThreeLineSearchCell;
    _Bool _shouldUseSpinner;
    _Bool _shouldUseNewNoNetworkMessage;
}

- (id)itemForLoadingState:(long long)arg1 queryText:(id)arg2 numberOfLoadedItems:(long long)arg3;
- (id)initWithUserSession:(id)arg1 shouldUseLargeResultCell:(_Bool)arg2 shouldUseSpinner:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

