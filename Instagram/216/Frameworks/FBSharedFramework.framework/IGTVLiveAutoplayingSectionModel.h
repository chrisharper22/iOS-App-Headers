//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;
@protocol IGTVChannelDataSourceType;

@interface IGTVLiveAutoplayingSectionModel : FBValueObject <IGListDiffable, NSCopying, NSCoding>
{
    NSString *_channelPK;
    id <IGTVChannelDataSourceType> _channelDataSource;
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) id <IGTVChannelDataSourceType> channelDataSource; // @synthesize channelDataSource=_channelDataSource;
@property(readonly, copy, nonatomic) NSString *channelPK; // @synthesize channelPK=_channelPK;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithChannelPK:(id)arg1 channelDataSource:(id)arg2 title:(id)arg3;

@end

