//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGQuantumSignalsCTAModelBuilder : NSObject
{
    NSString *_signalId;
    NSString *_itemId;
    NSString *_authorId;
    NSString *_containerModule;
    NSString *_inventorySource;
    long long _signalType;
    long long _surface;
    double _timestamp;
    long long _itemType;
    NSArray *_mediaIds;
    NSString *_clickMediaId;
}

+ (id)quantumSignalsCTAModelFromExistingQuantumSignalsCTAModel:(id)arg1;
+ (id)quantumSignalsCTAModel;
- (void).cxx_destruct;
- (id)withClickMediaId:(id)arg1;
- (id)withMediaIds:(id)arg1;
- (id)withItemType:(long long)arg1;
- (id)withTimestamp:(double)arg1;
- (id)withSurface:(long long)arg1;
- (id)withSignalType:(long long)arg1;
- (id)withInventorySource:(id)arg1;
- (id)withContainerModule:(id)arg1;
- (id)withAuthorId:(id)arg1;
- (id)withItemId:(id)arg1;
- (id)withSignalId:(id)arg1;
- (id)build;

@end

