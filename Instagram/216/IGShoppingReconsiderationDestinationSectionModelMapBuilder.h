//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IGShoppingReconsiderationDestinationSectionModelMapBuilder : NSObject
{
    NSMutableDictionary *_sectionValueToModelsMap;
}

- (void).cxx_destruct;
- (id)build;
- (void)addObject:(id)arg1 forSection:(id)arg2;
- (void)addObjects:(id)arg1 forSection:(id)arg2;
- (void)setObjects:(id)arg1 forSection:(id)arg2;
- (id)_modelsArrayForSection:(id)arg1;
- (id)init;

@end
