//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@protocol IGTVChannelDataSourceType;

@interface IGTVBrowseDestinationViewerDataSource : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    id <IGTVChannelDataSourceType> _singleChannel;
}

+ (id)singleChannel:(id)arg1;
+ (id)chaining;
- (void).cxx_destruct;
- (void)matchSingleChannel:(CDUnknownBlockType)arg1 chaining:(CDUnknownBlockType)arg2;

@end

