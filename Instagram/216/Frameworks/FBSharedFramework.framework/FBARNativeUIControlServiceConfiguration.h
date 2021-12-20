//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARServiceConfiguration-Protocol.h>
#import <FBSharedFramework/FBARServiceConfigurationCxx-Protocol.h>

@class NSNumber, NSString;
@protocol FBARNativeUIControlServiceEditableTextDelegate, FBARNativeUIControlServiceEffectDescriptor, FBARNativeUIControlServicePickerDelegate, FBARNativeUIControlServiceRawEditableTextDelegate, FBARNativeUIControlServiceSliderDelegate;

@interface FBARNativeUIControlServiceConfiguration : NSObject <FBARServiceConfiguration, FBARServiceConfigurationCxx>
{
    id <FBARNativeUIControlServiceEffectDescriptor> _effectDescriptor;
    id <FBARNativeUIControlServiceEditableTextDelegate> _editableTextDelegate;
    id <FBARNativeUIControlServicePickerDelegate> _pickerDelegate;
    id <FBARNativeUIControlServiceRawEditableTextDelegate> _rawEditableTextDelegate;
    id <FBARNativeUIControlServiceSliderDelegate> _sliderDelegate;
    NSNumber *_initialSliderValue;
    NSNumber *_initialPickerIndex;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithEffectDescriptor:(id)arg1 editableTextDelegate:(id)arg2 pickerDelegate:(id)arg3 rawEditableTextDelegate:(id)arg4 sliderDelegate:(id)arg5 initialSliderValue:(id)arg6 initialPickerIndex:(id)arg7;
+ (id)newWithEffectDescriptor:(id)arg1 editableTextDelegate:(id)arg2 pickerDelegate:(id)arg3 rawEditableTextDelegate:(id)arg4 sliderDelegate:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *initialPickerIndex; // @synthesize initialPickerIndex=_initialPickerIndex;
@property(readonly, nonatomic) NSNumber *initialSliderValue; // @synthesize initialSliderValue=_initialSliderValue;
@property(readonly, nonatomic) __weak id <FBARNativeUIControlServiceSliderDelegate> sliderDelegate; // @synthesize sliderDelegate=_sliderDelegate;
@property(readonly, nonatomic) __weak id <FBARNativeUIControlServiceRawEditableTextDelegate> rawEditableTextDelegate; // @synthesize rawEditableTextDelegate=_rawEditableTextDelegate;
@property(readonly, nonatomic) __weak id <FBARNativeUIControlServicePickerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
@property(readonly, nonatomic) __weak id <FBARNativeUIControlServiceEditableTextDelegate> editableTextDelegate; // @synthesize editableTextDelegate=_editableTextDelegate;
@property(readonly, nonatomic) id <FBARNativeUIControlServiceEffectDescriptor> effectDescriptor; // @synthesize effectDescriptor=_effectDescriptor;
@property(readonly, nonatomic) shared_ptr_e7d8ca2a engineServiceConfiguration;
@property(readonly, nonatomic) struct ServiceType serviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectDescriptor:(id)arg1 editableTextDelegate:(id)arg2 pickerDelegate:(id)arg3 rawEditableTextDelegate:(id)arg4 sliderDelegate:(id)arg5 initialSliderValue:(id)arg6 initialPickerIndex:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

