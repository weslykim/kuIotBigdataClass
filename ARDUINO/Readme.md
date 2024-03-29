                                ##2024 - 03 - 12
        아두이노 : 미들웨어 플랫폼이며 주로 임베디드 시스템 개발에 사용된다.
        임베디드 시스템: 특정한 기능을 수행하기 위한 컴퓨터 시스템(pc와는 정반대 시스템)
        보통 리눅스를 기반으로 하는 시스템이 많고 윈도우는 거의 없다.
        마이크로컨트롤러: 칩위의 컴퓨터라고 하며 다른 시스템의 일부로 사용되는 경우가 흔하며 데스크톱 컴퓨터와 비교하여 낮은 사양을 가지며 단순한 목적으로 이용된다.
        마이크로프로세서(uP):중앙처리장치(CPU)를 하나의 IC칩(집적회로)으로 집적시켜 만든 반도체 소자
        마이크로컨트롤러(uC):메모리+마이크로프로세서+입툴력 인터페이스를 합쳐서 컴퓨터의 메인보드와 하드디스크 기능을 하나로 합친 반도체 소자 마이컴이라고도 하며 작고 간단한 제어장치를 만들기위한 목적으로 특화된 마이크로 프로세서의 한종류 
        마이크로컨트롤러의 장점 : 소형화, 경량화, 저렴한 가격, 신뢰성 향상, 융통성
        단점: 낮은 처리 능력, 범용성 부족
        다운로더: 인터넷을 통해 파일이나 데이터를 다운로드하는 프로그램이나 도구를 의미하며 주로 웹
        브라우저의 고유의 다운로드 기능이나 별도의 다운로드 관리자를 사용한다.
        교차개발환경 
        크로스 컴파일러: 한플랫폼에서 다른플랫폼으로 코드를 커파일하는데 사용되며 아키텍처나 운영체제가 다른 시스템간에 프로그램을 개발하는데 사용된다.
        컴퓨터의 구조(하드웨어{중앙처리장치(cpu[mp]라고도한다,메모리,입력장치,출력장치,저장장치)},소프트웨어{운영체제,응용프로그램,시스템소프트웨어})
        컴퓨터의 실행과정    1.사용자가 입력장치를 통해 명령을 내림
                            2.운영체제가 받아들이고 cpu에 전달
                            3.cpu가 명령을 해석하고 실행
                            4.처리결과를 출력장치에 전달해서 출력
        cpu의 역할 :  1.명령어 호출(fetch)
                      2.명령어 해독(decording)
                      3.명령어 실행(execute한)
        CISC : 복잡한 명령어 집합 컴퓨팅(아키텍처)을 의미하며 명령어가 복잡하며 한개의 명령어로 여러작업을 수행할수 있다. 주로 개인용 컴퓨터에서 사용한다.
        RISC : 간소한 명령어 집합 컴퓨팅(아키텍처)을 의미하며 명령어가 간단하고 일관성있어서 한개의 명령어로 한가지의 작업만을 수행할수 있다.주로 ARM, 모바일기기, 임베디드 시스템을 쓰는 저전력장비에서 사용한다.
        폰 노이만 구조와 하버드 구조(컴퓨터시스템에서 중앙처리장치와 메모리 간의 데이터 흐름을 조직하는 방법)
        폰 노이만 구조:CPU와 메모리가 하나의 버스안에 저장되어있으며 명령어를 메모리에서 가져와서 해독한후 실행하는 순차적인 구조가 특징이다. 메모리 속도가 느려지며 병목 현상이 단점이다.
        하버드 구조: 명령어와 데이터를 별도의 메모리 공간에 저장하는 방식이며 명령어와 데이터에 별도의 메모리 버스를 사용하여 동시에 엑세스가 가능하다. 하드웨어가 복잡해지지만 메모리 속도는 느려지지 않고 병목현상이 없다.
        메모리의 종류(ROM과 RAM, SRAM과 DRAM)
        ROM과 RAM: 전원이 주어지지 않을때 기록된 내용의 보존 여부로 구분
        ROM:읽기 전용 메모리이며 주로 고정된 데이터 또는 프로그램 코드를 저장하는데 사용한다.
        데이터는 수정이 불가능하다. 전원이 꺼져도 데이터는 유지된다.
        ROM: 읽기 및 쓰기가 가능한 임시데이터 저장소이며 프로그램 실행중에 사용되는 데이터 및 작업중인 정보를 저장하는데 사용한다. 전원이 꺼지면 데이터가 손실된다.
        SRAM과 DRAM: RAM을 만드는 방식에 따라 리프레시의 필요 여부로 구분.
        SRAM:레지스터를 사용하여 데이터를 저장하며 전원이 공급되는 한 상태를 유지한다. 큰밀도의 메모리를 가질수 없으며 빠른 캐시메모리나 레지스터 파일에 쓴다. 전력이 공급되는 한 상태를 유지하므로 전력 소비가 높다.
        DRAM: 캐패시터를 사용하고 주기적인 새로고침이 필요하므로 엑세스 시간이 SRAM보다 느리다. 주 메모리에 쓰이고 밀도가 높은 메모리 셀을 가질수 있으므로 많은 양의 데이터 저장이 가능하다.
        전력 소비가 SRAM보다 낮다.
        AVR:Atmel사가 개발한 8비트 RISC기반의 마이크로 컨트롤러이다. 임베드 시스템, 자종차 전자 시스템, 가전제품등 센서기술 분야에서 사용된다.
        종류( 타이니 메가 x-메가) 그중 메가 사이즈의 AT MEGA128을 알아본다.
        AT mega 128: 8비트 RISC 아키텍처를 기반으로 하여 2001년에 처음 발표된 마이크로 컨트롤러다.
        교차 개발 환경 : 프로그램을 개발하는 환경과 프로그램이 실행되는 환경이 서로 다를때 쓴다.
        마이크로칩 스튜디오 다운
        GPIO를 이용하여 AT mega 128속 LED깜빡이기 예제 시간부족
                                #2024 - 03 - 13
        GPIO를 이용하여 AT mega 128 속LED깜빡이기 예제
        확인작업(어제했던 파일을 열고 tools -> Device Programming -> Tool에 AVRISP mk|| 선택
        -> Device ATmega128A 선택후 적용 그리고 Memories바를 선택해서 경로 확인후(경로에 한글이
        있으면 안된다.) 프로그램 버튼 누르고 되는지 확인-> 확인되었으면 128에 결과를 확인한다.)
        GPIO를 이용하여 LED 전부 키거나 끄기 마이크로칩 스튜디오 작업
        GPIO를 이용하여 FND LED 키기(인가된 전원에 따라서 ANODE형인지 CATHODE형인지 구분한다.)
        ANODE형은 구성된 LED가 공통된 양극(ANODE)를 공유한다. CATHODE에 연결된 핀을 제어하여 LED를 켜는 방식을 사용한다.
        CATHODE형은 구성된 LED가 공통된 음극(CATHODE)를 공유한다. ANODE로 LED가 제어되며 ANODE에 연결된 LED를 HIGH로 설정하여 LED를 켤수 있다.(우리가 실슴할 장비의 종류는 CATHODE형이다.)
        GPIO를 이용하여 스위치 입력을 받고 스위치를 누르면 LED가 점등할수 있게 실습
        GPIO를 이용하여 FND가 0부터 F까지 순서대로 표시될수 있게 실습
                                #2024 - 03 - 14
        GPIO를 이용하여 스위치 입력을 받고 스위치를 누르면 FND가 0부터 F까지 순서대로 표시될수 있게 실습
        GPIO를 이용하여 스위치 입력을 받고 스위치를 누르면 LED가 점등할수 있게 실습(2개의 버튼을 동시에 누른경우)
        GPIO를 이용하여 스위치 입력을 받고 스위치를 누르면 LED가 점등할수 있게 실습(엣지체크까지 : 엣지체크는 신호의 변화나 변동에 반응하는 동작을 체크하는 행동을 의미한다.)
        GPIO를 이용하여 스위치 입력을 받고 스위치를 누르면 LED가 깜빡일수 있게 실습(상승엣지체크까지 수행 : 상승엣지체크란 스위치를 누르지 않다가 눌렀을때 동작을 체크할때를 의미)
        인터럽트(방해하다라는 뜻으로 작업진행중 다른일이 발생하여 그 일을 먼저 처리해야하는 상항이 발생하는 경우른 의미한다. 급한일을 먼저 처리하고 원래의 일을 다시 이어서 수행한다.<- 인터럽트 서비스 루틴이 이 작업을 수행)
        디버깅(오류체크 - 프로젝트 선택 후 TEST 파일명 PROPERTIES선택_ TOOL선택후 SELECTED DEBUGGER/PROGRAMMER에서 SIMULATOR선택후 START DEBUGGING (F5) 실행)  단 빌드가 되있는경우만 가능
                                #2024 - 03 - 15
        외부 인터럽트를 허용시켜서 스위치를 누르면 불이 켜지고 꺼지도록 상승엣지체크 실습하기
        외부 인터럽트를 허용시켜서 스위치를 누르면 불이 깜빡이도록 상승엣지체크 실습하기
        위의 것과 똑같은 실습을 하되 스위치를 1개 더늘리는 실습
        DC모터(고정자로 영구자석을 사용하고, 회전자로 코일을 사용하여 구성한것으로 전류의 방향을 이용하여 자력의 반발, 흡인력을 발생시켜 회전력을 만들어내는 모터)
        스위치를 두개를 만들어서 1개는 시계방향 1개는 반시계방향으로 누르면 돌아갈수 있게 실습(다양하게 응용하는것이 가능) 시간부족
                                #2024 - 03 - 18
        스위치를 두개를 만들어서 1개는 시계방향 1개는 반시계방향으로 누르면 돌아갈수 있게 실습
        스위치를 세개를 만들어서 1개는 시계방향 1개는 반시계방향 1개는 멈출수 있게 실습
        타이머와 카운터(실시간 시스템 및 타이밍 제어의 역할을 맡는다.)
        타이머(일정한 간격으로 시간을 측정하거나 지연을 생성하는데 사용되며 주파수를 기반으로 작동여하며 특정주기마다 센서 데이터를 읽거나 정확한 시간 지연이 필요한 특정동작을 제어하는데 사용된다. MCU 내부 클럭을 세는 장치)
        프리스케일러(디지털 시그널의 주파수를 줄이는 데 사용되는 장치나 회로를 의미한다. 정확도를 높이는데 도움된다. 시간측정이나 이벤트 카운팅등의 작업을 수행하는데 사용)
        카운터(이벤트의 발생 횟수를 측정하는데 사용되며 주파수분배기를 사용하여 주파수를 측정하거나 정확한 주파수 동기화를 위해 사용된다.MCU 외부에서 입력되는 클럭을 세는 장치)
        타이머를 사용하여 0.01초를 LED를 사용하여 표시하기(오버플로우 or 출력비교를 선택해서 사용)
        PWM(주기적으로 반복되는 펄스 신호를 생성하여 펄스의 폭을 변조하여 원하는 아날로그 값을 표현하는 것으로 폭이 증가하면 출력값도 증가하고 감소하면 출력값도 감소한다.)
        GPIO, PWM을 활용하여 스위치 두개를 이용하여 스위치를 누르면 LED가 점멸되고 다른 스위치를 누르면 LED가 꺼지는것을 실습
