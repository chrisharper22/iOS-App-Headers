//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGListDiffable-Protocol.h"
#import "NSObject-Protocol.h"

@class IGUser, IGUserListItemSectionConfiguration, NSArray;

@protocol IGUserListItemConfigurationProtocol <NSObject, IGListDiffable>
@property(readonly, nonatomic) NSArray *userMedia;
@property(readonly, nonatomic) IGUserListItemSectionConfiguration *sectionConfig;
@property(readonly, nonatomic) _Bool showBottomSeparator;
@property(readonly, nonatomic) IGUser *user;
@end

