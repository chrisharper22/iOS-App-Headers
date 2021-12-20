//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGFeedItemPageCellState, IGMedia;
@protocol IGFeedConfigurationType, IGFeedItemConfigurationType, IGFeedItemLoggingProviderDelegate><IGChainingLoggingProvider;

@protocol IGFeedItemSectionContext <NSObject>
- (double)containerHeight;
- (double)containerWidth;
- (IGFeedItemPageCellState *)pageCellState;
- (id <IGFeedItemLoggingProviderDelegate><IGChainingLoggingProvider>)loggingProvider;
- (id <IGFeedItemConfigurationType>)itemConfiguration;
- (id <IGFeedConfigurationType>)feedConfiguration;
- (IGMedia *)media;
@end

