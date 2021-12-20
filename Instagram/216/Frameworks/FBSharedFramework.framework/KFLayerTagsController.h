//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KFDecodedAsset, NSMutableDictionary;

@interface KFLayerTagsController : NSObject
{
    KFDecodedAsset *_decodedAsset;
    NSMutableDictionary *_tagToLayerIDMap;
}

- (void).cxx_destruct;
- (void)_inventoryTagsForLayer:(const struct Layer *)arg1 tagMap:(id)arg2;
- (void)_inventoryLayerTags;
- (id)layerIDsWithTag:(id)arg1 recursive:(_Bool)arg2;
- (id)initWithDecodedAsset:(id)arg1;

@end

