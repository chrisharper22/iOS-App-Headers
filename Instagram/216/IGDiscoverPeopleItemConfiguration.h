//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class IGDiscoverPeopleButtonTypeModel, IGFeaturedUserInfo, NSString;
@protocol IGFollowPeopleLoggerProtocol;

@interface IGDiscoverPeopleItemConfiguration : NSObject <IGListDiffable>
{
    NSString *_diffIdentifier;
    _Bool _showHideButton;
    id <IGFollowPeopleLoggerProtocol> _logger;
    IGFeaturedUserInfo *_featuredUserInfo;
    IGDiscoverPeopleButtonTypeModel *_buttonTypeModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDiscoverPeopleButtonTypeModel *buttonTypeModel; // @synthesize buttonTypeModel=_buttonTypeModel;
@property(readonly, nonatomic) _Bool showHideButton; // @synthesize showHideButton=_showHideButton;
@property(readonly, nonatomic) IGFeaturedUserInfo *featuredUserInfo; // @synthesize featuredUserInfo=_featuredUserInfo;
@property(readonly, nonatomic) id <IGFollowPeopleLoggerProtocol> logger; // @synthesize logger=_logger;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithLogger:(id)arg1 featuredUserInfo:(id)arg2 showHideButton:(_Bool)arg3 buttonTypeModel:(id)arg4;

@end

