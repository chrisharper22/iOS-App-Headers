//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGModuleItem;

@interface IGModuleItemRankerResult : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGModuleItem *_resultWithHit_item;
    unsigned long long _resultWithHit_operationState;
}

+ (id)resultWithHitWithItem:(id)arg1 operationState:(unsigned long long)arg2;
+ (id)none;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 resultWithHit:(CDUnknownBlockType)arg2;

@end

