//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStringStyle, NSString;

@interface IGCommentModelStyleConfiguration : NSObject
{
    unsigned long long _hash;
    _Bool _showFBPageNameHeadline;
    _Bool _hideUsername;
    _Bool _enableUnifyPbiaHideUsername;
    _Bool _experimentVerifiedBadgeOnCaption;
    _Bool _supportVerifiedBadgeOnCaption;
    _Bool _experimentVerifiedBadgeOnComments;
    _Bool _supportVerifiedBadgeOnComments;
    NSString *_adTitle;
    IGStringStyle *_commentStyle;
    IGStringStyle *_defaultTruncationTokenStyle;
    IGStringStyle *_moreTokenStyle;
    IGStringStyle *_lessTokenStyle;
    IGStringStyle *_usernameStyle;
}

+ (id)groupParentConfig;
+ (id)verifiedConfig;
+ (id)defaultConfig;
- (void).cxx_destruct;
@property(nonatomic) _Bool supportVerifiedBadgeOnComments; // @synthesize supportVerifiedBadgeOnComments=_supportVerifiedBadgeOnComments;
@property(nonatomic) _Bool experimentVerifiedBadgeOnComments; // @synthesize experimentVerifiedBadgeOnComments=_experimentVerifiedBadgeOnComments;
@property(nonatomic) _Bool supportVerifiedBadgeOnCaption; // @synthesize supportVerifiedBadgeOnCaption=_supportVerifiedBadgeOnCaption;
@property(nonatomic) _Bool experimentVerifiedBadgeOnCaption; // @synthesize experimentVerifiedBadgeOnCaption=_experimentVerifiedBadgeOnCaption;
@property(copy, nonatomic) IGStringStyle *usernameStyle; // @synthesize usernameStyle=_usernameStyle;
@property(copy, nonatomic) IGStringStyle *lessTokenStyle; // @synthesize lessTokenStyle=_lessTokenStyle;
@property(copy, nonatomic) IGStringStyle *moreTokenStyle; // @synthesize moreTokenStyle=_moreTokenStyle;
@property(copy, nonatomic) IGStringStyle *defaultTruncationTokenStyle; // @synthesize defaultTruncationTokenStyle=_defaultTruncationTokenStyle;
@property(copy, nonatomic) IGStringStyle *commentStyle; // @synthesize commentStyle=_commentStyle;
@property(retain, nonatomic) NSString *adTitle; // @synthesize adTitle=_adTitle;
@property(nonatomic) _Bool enableUnifyPbiaHideUsername; // @synthesize enableUnifyPbiaHideUsername=_enableUnifyPbiaHideUsername;
@property(nonatomic) _Bool hideUsername; // @synthesize hideUsername=_hideUsername;
@property(nonatomic) _Bool showFBPageNameHeadline; // @synthesize showFBPageNameHeadline=_showFBPageNameHeadline;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCommentStyle:(id)arg1 defaultTruncationTokenStyle:(id)arg2 moreTokenStyle:(id)arg3 lessTokenStyle:(id)arg4 usernameStyle:(id)arg5 supportVerifiedBadgeOnCaption:(_Bool)arg6 supportVerifiedBadgeOnComments:(_Bool)arg7;

@end

