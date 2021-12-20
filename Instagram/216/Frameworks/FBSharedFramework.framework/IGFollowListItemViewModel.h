//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>

@class IGHashtagModel, NSString;

@interface IGFollowListItemViewModel : NSObject <IGListDiffable>
{
    IGHashtagModel *_hashtag;
    NSString *_sectionTitle;
    long long _followButtonState;
}

- (void).cxx_destruct;
@property(nonatomic) long long followButtonState; // @synthesize followButtonState=_followButtonState;
@property(readonly, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(readonly, nonatomic) IGHashtagModel *hashtag; // @synthesize hashtag=_hashtag;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithHashtag:(id)arg1 followButtonState:(long long)arg2 sectionTitle:(id)arg3;

@end
