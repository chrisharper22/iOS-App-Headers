//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGTailFetchSignalsValueProducerConfig, NSDictionary, NSNumber, NSString;

@protocol IGTailFetchSignalsValueProducerDataSource <NSObject>
- (void)storeStates:(NSDictionary *)arg1;
- (NSNumber *)restoreStateForIdentifier:(NSString *)arg1;
- (IGTailFetchSignalsValueProducerConfig *)configForIdentifier:(NSString *)arg1;
@end

