//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGProfileBodyContentViewModel, IGProfileLeadingContentViewModel, IGProfileTrailingContentViewModel;
@protocol IGProfilePictureImageViewDelegate, IGProfileProviderBodyDelegate, IGProfileProviderIconButtonDelegate, IGProfileProviderTextButtonDelegate;

@interface IGProfileProviderOptionalViewModelBuilder : NSObject
{
    IGProfileLeadingContentViewModel *_leadingContentViewModel;
    IGProfileBodyContentViewModel *_bodyContentViewModel;
    IGProfileTrailingContentViewModel *_trailingContentViewModel;
    id <IGProfilePictureImageViewDelegate> _profileImageDelegate;
    id <IGProfileProviderBodyDelegate> _profileBodyDelegate;
    id <IGProfileProviderTextButtonDelegate> _profileTextButtonDelegate;
    id <IGProfileProviderIconButtonDelegate> _profileIconButtonDelegate;
    _Bool _isVerified;
    _Bool _isTextButtonEnabled;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)build;
- (id)isTextButtonEnabled:(_Bool)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType isTextButtonEnabled;
- (id)isVerified:(_Bool)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType isVerified;
- (id)initWithLeadingContentViewModel:(id)arg1 bodyContentViewModel:(id)arg2 trailingContentViewModel:(id)arg3 profileImageDelegate:(id)arg4 bodyDelegate:(id)arg5 textButtonDelegate:(id)arg6 iconButtonDelegate:(id)arg7;

@end

