//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGEmptyFeedModel, IGInfoViewModel;

@interface IGFeedStatusConfig : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGEmptyFeedModel *_empty_model;
    IGInfoViewModel *_info_model;
}

+ (id)infoWithModel:(id)arg1;
+ (id)emptyWithModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchEmpty:(CDUnknownBlockType)arg1 info:(CDUnknownBlockType)arg2;

@end
