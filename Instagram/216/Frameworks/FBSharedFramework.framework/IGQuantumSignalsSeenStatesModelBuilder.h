//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGQuantumSignalsMetaIds, NSDictionary, NSString;

@interface IGQuantumSignalsSeenStatesModelBuilder : NSObject
{
    NSString *_signalId;
    NSString *_containerModule;
    NSString *_inventorySource;
    long long _signalType;
    long long _surface;
    NSString *_itemId;
    IGQuantumSignalsMetaIds *_metaIds;
    long long _itemType;
    NSDictionary *_seenStates;
}

+ (id)quantumSignalsSeenStatesModelFromExistingQuantumSignalsSeenStatesModel:(id)arg1;
+ (id)quantumSignalsSeenStatesModel;
- (void).cxx_destruct;
- (id)withSeenStates:(id)arg1;
- (id)withItemType:(long long)arg1;
- (id)withMetaIds:(id)arg1;
- (id)withItemId:(id)arg1;
- (id)withSurface:(long long)arg1;
- (id)withSignalType:(long long)arg1;
- (id)withInventorySource:(id)arg1;
- (id)withContainerModule:(id)arg1;
- (id)withSignalId:(id)arg1;
- (id)build;

@end
