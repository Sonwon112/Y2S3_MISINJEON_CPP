// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MisinjeonPlayerController.generated.h"

UCLASS()
class Y2S3_MISINJEON_API AMisinjeonPlayerController : public APlayerController
{
    GENERATED_BODY()
public:
<<<<<<< HEAD
	// HUD ������ ������ �� �ִ� �Լ� �߰�
	UFUNCTION(BlueprintCallable, Category = "HUD")
	UUserWidget* GetHUDWidget() const { return HUD; }
	
=======
    //UI ��Ŀ�̿�
    UFUNCTION(BlueprintCallable, Category = "UI")
    void OpenUI(TSubclassOf<class UUserWidget> UIClass);
    UFUNCTION(BlueprintCallable, Category = "UI")
    void CloseTopUI();
    UFUNCTION(BlueprintCallable, Category = "UI")
    void SetFocusToTopUI();

    // HUD ������ ������ �� �ִ� �Լ�
    UFUNCTION(BlueprintCallable, Category = "HUD")
    UUserWidget* GetHUDWidget() const { return HUD; }
>>>>>>> develop

protected:
    // ������ ���۵� �� HUD�� ȭ�鿡 ǥ��
    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

private:
    //UI���� ������ �Ŵ�����Ʈ
    UPROPERTY()
    TArray<class UUserWidget*> UIStack;
    void HandleUIBack();
    void SetWidgetFocus(UUserWidget* Widget);

    // HUD�� ����� ���� �������Ʈ Ŭ����
    UPROPERTY(EditAnywhere, Category = "HUD")
    TSubclassOf<class UUserWidget> HUDClass;

    UPROPERTY(EditAnywhere, Category = "HUD")
    TSubclassOf<UUserWidget> GameOverWidgetClass;
    UPROPERTY(EditAnywhere, Category = "HUD")
    TSubclassOf<UUserWidget> MainMenuWidgetClass;

<<<<<<< HEAD
	UPROPERTY(EditAnywhere, Category = "HUD")
	TSubclassOf<UUserWidget> GameOverWidgetClass;

	UPROPERTY(EditAnywhere, Category = "HUD")
	TSubclassOf<UUserWidget> MainMenuWidgetClass;

	// ������ HUD ���� �ν��Ͻ�
	UPROPERTY()
	UUserWidget* HUD;

	UPROPERTY()
	UUserWidget* GameOverWidget;

	// ������ MainMenu ���� �ν��Ͻ�
	UPROPERTY()
	UUserWidget* MainMenuWidget;

};
=======
    // ������ HUD ���� �ν��Ͻ�
    UPROPERTY()
    UUserWidget* HUD;
    UPROPERTY()
    UUserWidget* GameOverWidget;
    // ������ MainMenu ���� �ν��Ͻ�
    UPROPERTY()
    UUserWidget* MainMenuWidget;
};
>>>>>>> develop
