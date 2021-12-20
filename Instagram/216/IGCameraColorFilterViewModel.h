//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFilter, NSString, UIImage;
@protocol IGCameraColorFilterViewModelDelegate;

@interface IGCameraColorFilterViewModel : NSObject
{
    _Bool _isSelected;
    NSString *_filterIdentifier;
    IGFilter *_filter;
    UIImage *_previewImage;
    id <IGCameraColorFilterViewModelDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCameraColorFilterViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) IGFilter *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSString *filterIdentifier; // @synthesize filterIdentifier=_filterIdentifier;
@property(readonly, nonatomic) NSString *accessibilityCopy;
- (void)_generatePreviewImage;
@property(readonly, nonatomic) NSString *filterName;
- (id)initWithFilter:(id)arg1 filterIdentifier:(id)arg2;

@end
