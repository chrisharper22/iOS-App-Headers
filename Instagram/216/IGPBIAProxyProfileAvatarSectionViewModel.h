//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGUser, NSNumber, NSString;

@interface IGPBIAProxyProfileAvatarSectionViewModel : NSObject <IGListDiffable>
{
    IGUser *_user;
    NSString *_numOfFacebookFollower;
    NSNumber *_fullNumberOfFacebookFollower;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *fullNumberOfFacebookFollower; // @synthesize fullNumberOfFacebookFollower=_fullNumberOfFacebookFollower;
@property(copy, nonatomic) NSString *numOfFacebookFollower; // @synthesize numOfFacebookFollower=_numOfFacebookFollower;
@property(readonly, copy, nonatomic) IGUser *user; // @synthesize user=_user;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithUser:(id)arg1 numOfFacebookFollower:(id)arg2 fullNumberOfFacebookFollower:(id)arg3;
- (id)initWithUser:(id)arg1;

@end

