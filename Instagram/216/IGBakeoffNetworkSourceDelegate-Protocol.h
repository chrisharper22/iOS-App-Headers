//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGBakeoffNetworkSource, IGBakeoffPairList, IGBakeoffSelectionPrompt, NSError;

@protocol IGBakeoffNetworkSourceDelegate <NSObject>
- (void)bakeoffNetworkSource:(IGBakeoffNetworkSource *)arg1 didFailWithError:(NSError *)arg2;
- (void)bakeoffNetworkSource:(IGBakeoffNetworkSource *)arg1 didSucceedWithPairList:(IGBakeoffPairList *)arg2 bakeoffSelectionPrompt:(IGBakeoffSelectionPrompt *)arg3;
@end

